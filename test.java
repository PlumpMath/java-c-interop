public class test {

    private native void sec();

    public static void main(String[] a) {
        new test().sec();
    }

    static {
        System.loadLibrary("relay");
    }
}
