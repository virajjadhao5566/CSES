import java.util.Scanner;

public class rectangle_cutting {
    public static void helper(int a, int b) {
        int[][] dp = new int[a + 1][b + 1];
        for (int i = 0; i <= a; i++) {
            for (int j = 0; j <= b; j++) {
                dp[i][j] = Integer.MAX_VALUE;
            }
        }
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                if (j - i > 0)
                    dp[i][j] = Math.min(dp[i][j], 1 + dp[i][j - i]);
                if (i - j > 0)
                    dp[i][j] = Math.min(dp[i][j], 1 + dp[i - j][j]);
                if (i == j)
                    dp[i][j] = 0;
            }
        }
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
