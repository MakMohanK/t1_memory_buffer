#include <iostream>
#include <fmt/core.h>

int main() {
    // Create a fmt::memory_buffer
    fmt::memory_buffer buffer;

    // Following line is depricated
    // fmt::format_to(buffer, "{0} {1}", "Hello", "world");

    // Use following line instead
    fmt::format_to(std::back_inserter(buffer), "{0} {1}", "Hello", "world");

    // Output the contents of the buffer
    std::cout << "Formatted string: " << buffer.data() << std::endl;

    return 0;
}