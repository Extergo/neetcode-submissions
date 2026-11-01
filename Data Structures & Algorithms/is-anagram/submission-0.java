//import java.util.HashMap;

class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> myMap1 = new HashMap<>();
        HashMap<Character, Integer> myMap2 = new HashMap<>();

        int temp = s.length();

        if (temp != t.length()) {
            return false;
        }

        for (int i = 0; i < temp; i++) {
            if (myMap1.containsKey(s.charAt(i))) {
                myMap1.put(
                    s.charAt(i),
                    myMap1.get(s.charAt(i)) + 1
                );
            } else {
                myMap1.put(s.charAt(i), 1);
            }

            if (myMap2.containsKey(t.charAt(i))) {
                myMap2.put(
                    t.charAt(i),
                    myMap2.get(t.charAt(i)) + 1
                );
            } else {
                myMap2.put(t.charAt(i), 1);
            }
        }

        return myMap1.equals(myMap2);
    }
}