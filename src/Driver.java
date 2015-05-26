/**
 * Driver 
 * 
 * @brief   Implement test of the Java Native Interface (JNI) to call into C 
 *          libraries
 */
public class Driver {

    // This is the native function we're calling. Note the 'native' keyword
    private native void sec();

    public static void main(String[] a) {
        new Driver().sec();
    }

    // Use OS facilities to load the dynamic library. In our case, the library
    // we use is a 'relay' library to forward the calls to the real functions
    // inside libsec
    static {
        System.loadLibrary("relay");
    }
}
