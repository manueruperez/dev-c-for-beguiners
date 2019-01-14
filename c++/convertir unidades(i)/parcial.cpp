// ejercisio del parcial:
             
             
class pasar
{
      float r,t;
      public:{}
      float p,i;
      float pulgadas();
      float pulgadas(float x);
      float pulgadas(float x, float y);
      pasar(void);
      ~pasar(void);
};

pasar::pasar(void)
{
                  t=2.54;p=1;i=1;
}
pasar::~pasar(void)
{
}
float pulgadas(float x);
{
      p=x;
      r=pulgadas;
      return r;
}
float pulgadas(float x,float y);
{
      p=x;i=y;
      r=pilgadas(),
      return r;
}
float pulgadas();
{
   if(i==1||i==0.1||i==10)
   {
     r=p*t;
     if(i==0.1)
     {
               r*10;
     }
     if(i==10)
     {
              r/100;
     }
     else
     r=-1,
   }     
}
