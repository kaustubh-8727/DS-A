string convertToTitle(int n) {
        string s="";
   while(n>0)
   {
       int x=n%26;
       if(x==0)
       {
           s='Z'+s;
           n=n/26-1;
       }
       else
       {
           s=char('A'+(x-1))+s;
           n=n/26;
       }
   }

  return s;
        
    }
