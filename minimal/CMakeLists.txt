add_executable(minimal minimal.c)

add_custom_command(
  TARGET minimal POST_BUILD
  COMMAND ${SREC_CAT} "$<TARGET_FILE:minimal>"
    -binary -offset 0x200 -o "$<TARGET_FILE:minimal>.c1p"
    -Ohio_Scientific -execution-start-address=0x200
  VERBATIM)