void my_putchar(char c)
{
  write(1, &c, 1);
}

int	main(void)
{
  int  count;

  count	= 97;
  while(count < 123)
  {
    printf("%c", count);
    count++;
  }


  return(0);
}
