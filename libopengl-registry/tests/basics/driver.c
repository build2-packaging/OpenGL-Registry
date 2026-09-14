#include <GL/glcorearb.h>
#include <GL/glext.h>
#include <KHR/khrplatform.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  assert (GL_GLEXT_VERSION == 20260803);
  assert (GL_VERSION_4_6);
  return 0;
}
