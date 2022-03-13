class Solution {
public
    List<String> findStrobogrammatic(int n) {
        List<String> results = new ArrayList<>();

        if (n % 2 == 0) {
            build(results, "", n);
        } else {
            build(results, "0", n - 1);
            build(results, "1", n - 1);
            build(results, "8", n - 1);
        }

        // remove invalid strings
        results.removeIf(num->num.length() > 1 && num.charAt(0) == '0');

        return results;
    }

private
    void build(List<String> result, String middle, int toAdd) {
        if (toAdd == 0) {
            result.add(middle);
            return;
        }

        build(result, "0" + middle + "0", toAdd - 2);
        build(result, "1" + middle + "1", toAdd - 2);
        build(result, "6" + middle + "9", toAdd - 2);
        build(result, "8" + middle + "8", toAdd - 2);
        build(result, "9" + middle + "6", toAdd - 2);
    }
}