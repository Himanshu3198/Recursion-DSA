class Solution {

    public String solve(int n) {
        if (n == 1) return "1";
        String ans = solve(n - 1);
        int i = 0, len = ans.length();
        String res = "";
        while (i < len) {
            int j = i + 1;
            int count = 1;
            while (j < len && ans.charAt(i) == ans.charAt(j)) {
                count++;
                j++;
            }
            res += (Integer.toString(count) + ans.charAt(i));

            if (count > 1) i = j; else i++;
        }
        return res;
    }

    public String countAndSay(int n) {
        return solve(n);
    }
}
