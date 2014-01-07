#include "test_nlsml.c"
#include "test_srgs.c"

int main(int argc, char **argv)
{
  if(test_nlsml() != 0) {
    return -1;
  }

  if(test_srgs() != 0) {
    return -1;
  }

  return 0;
}
