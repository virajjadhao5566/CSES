import java.util.ArrayList;
import java.util.Scanner;

public class a11_money_sum {
    public static void helper(ArrayList<Integer> arr, int n) {
        int sum = 0;
        for (int it : arr)
            sum += it;
        int[][] dp = new int[n][sum + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= sum; j++) {
                dp[i][j] = 0;
            }
        }
        dp[0][arr.get(0)] = 1;
        for (int i = 1; i < n; i++) {
            dp[i][arr.get(i)] = 1;
            for (int j = 0; j <= sum; j++) {
                if (j - arr.get(i) >= 0) {
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - arr.get(i)]);
                }
                if (dp[i - 1][j] == 1)
                    dp[i][j] = 1;
            }
        }
        int cnt = 0;
        ArrayList<Integer> ans = new ArrayList<>();
        for (int i = 0; i <= sum; i++) {
            if (dp[n - 1][i] == 1) {
                cnt++;
                ans.add(i);
            }
        }
        System.out.println(cnt);
        for (int it : ans) {
            System.out.print(it + " ");
        }
        return;
    }

    public static void main(String[] args) {
        // System.out.println("Hello world");
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>(n);
        for (int i = 0; i < n; i++) {
            int temp = sc.nextInt();
            arr.add(temp);
        }
        helper(arr, n);
    }
}