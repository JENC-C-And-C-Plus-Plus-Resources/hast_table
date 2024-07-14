add_library(HashTable "")

target_sources(HashTable
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/HashTable.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/HashTable.h
  )

  target_include_directories(HashTable
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

  