class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
        int sum=0,p1=0;

       int s=0;

       for(int i=0;i<n;i++)

       {

           p1+=p[i].petrol;

           p1-=p[i].distance;

           if(p1<0)

           {

              sum+=p1;

              s=i+1;

              p1=0;

           }

       }

       return p1+sum>0?s:-1;
    }
};
