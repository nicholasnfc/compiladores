int *sort(int *data, int count, int(*compare)(int,int))
{
  register int a, b;
  void *t;

  for (a = 1; a < count; a++) {
    t = &data[a];
    b = a - 1;
    while (b >= 0 && (*compare)((long long)t, data[b]) < 0) { 
      data[b+1] = data[b];
      b--;
    }
    data[b+1] = (long long)t; 
  }
  return data;
} // método de ordenação, compara os vizinhos.


