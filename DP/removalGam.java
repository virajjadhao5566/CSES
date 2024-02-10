import java.util.Scanner;

public class removalGam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int[] arr = new int[n];
        long sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sum += arr[i];
        }

        long[][] dp = new long[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dp[i][j] = 0;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (i == j) {
                    dp[i][j] = arr[i];
                    continue;
                }
                dp[i][j] = Math.max(arr[j] - dp[i][j - 1], arr[i] - dp[i + 1][j]);
                // System.out.print(dp[i][j] + " ");
            }
            // System.out.println();
        }
        // for (int i = 0; i < n; i++) {
        // for (int j = 0; j < n; j++) {
        // System.out.print(dp[i][j] + " ");
        // }
        // System.out.println();
        // }
        long temp = dp[0][n - 1] + sum;
        System.out.println(temp / 2);
    }
}
