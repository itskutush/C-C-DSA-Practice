int increment(int &a){
    int c = a;
    c=c+10;
   return c;
}

int main()
{
    int a = 2;
   printf("%d",increment(a));
  
}
