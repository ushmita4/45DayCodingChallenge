int searchInsert(vector<int>& arr, int m)

{

  

    int n = arr.size();

    int lo = 0 , hi = n-1;

    int ans = -1;

    while(lo <= hi)

    {

        int mid = (hi + lo)/2;

        if(arr[mid] == m)

        {

            ans = mid;

        }

        else if(arr[mid] > m)

        {

            hi = mid - 1;

        }else{

            lo = mid+1;

        }

 

    }

    if(ans == -1)

    {

        while(lo <= hi)

        {

        int mid = (hi + lo)/2;

        

        if(arr[mid] > m)

        {

            if(arr[mid-1] < m && arr[mid] > m)

            {

                return mid - 1;

            }

        

            hi = mid - 1;

        }else{

            if(arr[mid+1] > m && arr[mid] < m)

            {

                return mid + 1;

            }

            lo = mid+1;

        }

 

        }

    

    }else{

        return ans;

    }

    

 

}

 
