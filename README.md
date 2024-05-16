# t1_memory_buffer
PSMA Test Project One

# Project: Memmory Buffer

## Used Packages fmt
### Old Package Version
~~~cpp
fmt 7.0.0
~~~
### New Package Version
~~~cpp
fmt 10.2.1
~~~

### Depricated API
~~~ cpp
fmt::format_to(buffer, "{0} {1}", "Hello", "world");
~~~

### Replace with
~~~ cpp
fmt::format_to(std::back_inserter(buffer), "{0} {1}", "Hello", "world");
~~~


