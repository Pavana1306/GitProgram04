void fact(int n)
{
  int f = 1;
  for (int i=2; i<=n; i++)
    f = f * i;

  printf("fact of %d is %d",n,f);

}
