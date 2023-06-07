class Solution {
public:
    int minFlips(int a, int b, int c)
    {
        int ans=0;
        vector<int> va(30,0);
        vector<int> vb(30,0);
        vector<int> vc(30,0);
        for(int i=29;i>=0;i--)
        {
            va[i]=a%2;
            a/=2;
            vb[i]=b%2;
            b/=2;
            vc[i]=c%2;
            c/=2;
        }
        for(int i=0;i<30;i++)
        {
            if(vc[i]==0)
            {
                if(va[i]==1) ans+=1;
                if(vb[i]==1) ans+=1;
            }
            else
            {
                if(va[i]==0&&vb[i]==0) ans+=1;
            }
        }
        return ans;    
    }
};