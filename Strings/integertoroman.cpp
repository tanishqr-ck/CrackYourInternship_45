class Solution {
public:
    string intToRoman(int num) {
        string st="";
        while(num!=0)
        {
            if(num/1000)
            {
                for(int i=0;i<num/1000;i++)
                st+='M';
                num%=1000;
            }
            if(num<1000&&num>=900)
            {
                st+="CM";
                num-=900;
            }
            if(num/500)
            {
                for(int i=0;i<num/500;i++)
                st+='D';
                num%=500;
            }
            if(num<500&&num>=400)
            {
                st+="CD";
                num-=400;
            }
            if(num/100)
            {
                for(int i=0;i<num/100;i++)
                st+='C';
                num%=100;
            }
            if(num<100&&num>=90)
            {
                st+="XC";
                num-=90;
            }
            if(num/50)
            {
                for(int i=0;i<num/50;i++)
                st+='L';
                num%=50;
            }
             if(num<50&&num>=40)
            {
                st+="XL";
                num-=40;
            }
            if(num/10)
            {
                for(int i=0;i<num/10;i++)
                st+='X';
                num%=10;
            }
             if(num<10&&num>=9)
            {
                st+="IX";
                num-=9;
            }
            if(num/5)
            {
                for(int i=0;i<num/5;i++)
                st+='V';
                num%=5;
            }
             if(num<5&&num>=4)
            {
                st+="IV";
                num-=4;
            }
            if(num/1)
            {
                for(int i=0;i<num;i++)
                st+='I';
                num=0;
            }
        }
        return st;
    }
};