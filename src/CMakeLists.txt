add_executable(main main.cpp)
  
add_subdirectory(HashTable)

target_link_libraries(main
  PRIVATE
    HashTable
)