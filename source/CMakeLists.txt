add_executable(example example.cpp)

add_executable(main main.cpp)
target_link_libraries(main ${FRAMEWORK_NAME} ${LIBRARIES})
add_dependencies(main glfw ${FRAMEWORK_NAME} ${COPY_BINARY})

install(TARGETS main DESTINATION .)

add_executable(generate sdfgenerator.cpp)





target_link_libraries(example ${FRAMEWORK_NAME} ${LIBRARIES})
add_dependencies(example glfw ${FRAMEWORK_NAME} ${COPY_BINARY})

install(TARGETS example DESTINATION .)

add_executable(raytracer raytracer.cpp)

target_link_libraries(raytracer ${FRAMEWORK_NAME} ${LIBRARIES})
add_dependencies(raytracer glfw ${FRAMEWORK_NAME} ${COPY_BINARY})


install(TARGETS raytracer DESTINATION .)
