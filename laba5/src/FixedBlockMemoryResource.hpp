#include <memory_resource>
#include <vector>
#include <list>

class FixedBlockMemoryResource : public std::pmr::memory_resource {
private:
    std::vector<char> memory_block;
    size_t block_size;
    std::vector<void*> allocated_blocks;

protected:
    void* do_allocate(size_t bytes, std::size_t alignment) override {
        if (bytes > block_size) {
            throw std::bad_alloc();
        }

        void* ptr = static_cast<void*>(&memory_block[allocated_blocks.size() * bytes]);
        allocated_blocks.push_back(ptr);
        return ptr;
    }

    void do_deallocate(void* p, size_t bytes, std::size_t alignment) override {
        auto it = std::find(allocated_blocks.begin(), allocated_blocks.end(), p);
        if (it != allocated_blocks.end()) {
            allocated_blocks.erase(it);
        }
    }

    bool do_is_equal(const std::pmr::memory_resource& other) const noexcept override {
        return this == &other;
    }

public:
    FixedBlockMemoryResource(size_t block_size) 
        : block_size(block_size), memory_block(block_size * 10) {}

    ~FixedBlockMemoryResource() {
        allocated_blocks.clear();
    }
};
