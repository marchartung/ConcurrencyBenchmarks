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
  assert(9<x);
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

  assert(9<x);
}

void* t3(void* arg)
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

  assert(9<x);
}

void* t4(void* arg)
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

  assert(9<x);
}

void* t5(void* arg)
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

  assert(9<x);
}

void* t6(void* arg)
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

  assert(9<x);
}

void* t7(void* arg)
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

  assert(9<x);
}

void* t8(void* arg)
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

  assert(9<x);
}

void* t9(void* arg)
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

  assert(9<x);
}

void* t10(void* arg)
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

  assert(9<x);
}

int main(void)
{
  pthread_t id[10];

  pthread_create(&id[0], NULL, &t1, NULL);
  pthread_create(&id[1], NULL, &t2, NULL);
  pthread_create(&id[2], NULL, &t3, NULL);
  pthread_create(&id[3], NULL, &t4, NULL);
  pthread_create(&id[4], NULL, &t5, NULL);
  pthread_create(&id[5], NULL, &t6, NULL);
  pthread_create(&id[6], NULL, &t7, NULL);
  pthread_create(&id[7], NULL, &t8, NULL);
  pthread_create(&id[8], NULL, &t9, NULL);
  pthread_create(&id[9], NULL, &t10, NULL);


  pthread_join(id[0],NULL);
  pthread_join(id[1],NULL);
  pthread_join(id[2],NULL);
  pthread_join(id[3],NULL);
  pthread_join(id[4],NULL);
  pthread_join(id[5],NULL);
  pthread_join(id[6],NULL);
  pthread_join(id[7],NULL);
  pthread_join(id[8],NULL);
  pthread_join(id[9],NULL);

  assert(x>10);
  return 0;
}
