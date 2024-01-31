import java.util.Scanner;

public class rectangleCutting {
    public static void helper(int a, int b) {
        int[][] dp = new int[a + 1][b + 1];
        for (int i = 0; i <= a; i++) {
            for (int j = 0; j <= b; j++) {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = Integer.MAX_VALUE;
            }
        }
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                if (i == j) {
                    dp[i][j] = 0;
                    continue;
                }
                int low = 1, high = j - 1;
                while (low <= high) {
                    dp[i][j] = Math.min(dp[i][j], dp[i][low] + dp[i][high] + 1);
                    low++;
                    high--;
                }
                low = 1;
                high = i - 1;
                while (low <= high) {
                    dp[i][j] = Math.min(dp[i][j], dp[low][j] + dp[high][j] + 1);
                    low++;
                    high--;
                }
            }
        }
        // for (int i = 0; i <= a; i++) {
        // for (int j = 0; j <= b; j++) {
        // System.out.print(dp[i][j] + " ");
        // }
        // System.out.println();
        // }
        System.out.println(dp[a][b]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        helper(a, b);
    }
}
