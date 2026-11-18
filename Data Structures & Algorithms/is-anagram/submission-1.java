class Solution {
    public boolean isAnagram(String s, String t) {
        char[] arr1=s.toCharArray();
        char[] arr2=t.toCharArray();
        if(s.length()!=t.length())
        return false;
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        String res1=new String(arr1);
        String res2=new String(arr2);
        if(res1.equals(res2))
        {
        return true; 
        }
    return false;
    }
}
