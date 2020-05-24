void sort(int *vec, int siz)
{
  int i, j, max, tmp;

  for (i = siz; i > 1; i--) {
    max = 1;
    for (j = 2; j < i; j++) 
      if (vec[j] > vec[max])
        max = j;
    if (max != i) { 
      tmp = vec[i];
      vec[i] = vec[max];
      vec[max] = tmp;
    }
  }
} //ok, método de ordenação.

