Sam want to read exactly ‘TARGET’ number of pages.
He has an array ‘BOOK’ containing the number of pages for ‘N’ books.
Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.
Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 

Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
5 5
4 1 2 3 1
Sample Output 1 :
YES
Explanation Of Sample Input 1:
Sam can buy 4 pages book and 1-page book.
Sample Input 2:
2 1
1 2
Sample Output 2 :
NO


// ?optimal approach using two pointer O(n)


string read(int n, vector<int> book, int target)
{

    int l=0,r=n-1;
    sort(book.begin(),book.end());
    while(l<=r){
        int sum=book[l]+book[r];
        if(sum==target) return "YES";
        if(sum>target) r--;
        if(sum<target) l++;

    }
    return "NO";

    // Write your code here.
}







