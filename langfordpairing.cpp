bool findLangfordHelper(vector<int> &ans, int n) 
{

    if(n == 0) 
	{
        return true;
    }
    
    for(int i = 0; i < ans.size() - n - 1; i++)
	{
        if(ans[i] == 0 && ans[i + n + 1] == 0) 
		{
            
            ans[i] = n;
            ans[i + n + 1] = n;
            
           
            if(findLangfordHelper(ans, n - 1)) 
			{
                return true;
            }
            
            ans[i] = 0;
            ans[i + n + 1] = 0;

        }
    } 

    return false;

}

vector<int> findLangford(int n) 
{
    
    if(n % 4 == 1 || n % 4 == 2) 
	{
        vector<int> ans(1, -1);
        return ans;
    }
    
    vector<int> ans(2 * n, 0);
    
    findLangfordHelper(ans, n);
    
    return ans;
    
} 
