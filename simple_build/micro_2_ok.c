#include <assert.h>
#include <pthread.h>

int x=0;

void* t1(void* arg)
{
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
// 10

  assert(0<x);
}

void* t2(void* arg)
{
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
  x++;
// 10

  assert(0<x);
}

int main(void)
{
  pthread_t id[2];

  pthread_create(&id[0], NULL, &t1, NULL);
  pthread_create(&id[1], NULL, &t2, NULL);

  return 0;
}
