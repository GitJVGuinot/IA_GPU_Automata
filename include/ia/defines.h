#define SCALAR_SIZE 2 // Only to render

#define COUNTER_BIND 0
#define INDICES_BIND 1
#define CURR_IMG_BIND 2
#define PREV_IMG_BIND 3

#define SECTORS 4

#define O_RADIUS 12.0f
#define I_RADIUS 1.44f

#define NEAR_NEIGHBORS 6

#define C_WIDTH 512
#define C_HEIGHT 512
#define C_DEPTH (static_cast<s32>(NEAR_NEIGHBORS + (O_RADIUS * SECTORS)))

#define ARRAY_3D_INDEX(x, y, z, max_y, max_z)                               \
  static_cast<u32>(x) * static_cast<u32>(max_y) * static_cast<u32>(max_z) + \
      static_cast<u32>(y) * static_cast<u32>(max_z) +                       \
      static_cast<u32>(z)

const char defines[] = R"(
#version 460

#define COUNTER_BIND 0
#define INDICES_BIND 1
#define CURR_IMG_BIND 2
#define PREV_IMG_BIND 3

#define SECTORS 4

#define O_RADIUS 12.0
#define I_RADIUS 1.44

#define NEAR_NEIGHBORS 6

#define C_WIDTH 512
#define C_HEIGHT 512
#define C_DEPTH int(NEAR_NEIGHBORS + (O_RADIUS * SECTORS))

#define ARRAY_3D_INDEX(x, y, z, max_y, max_z) int((x *  max_y * max_z) + (y * max_z) + (z))
)";