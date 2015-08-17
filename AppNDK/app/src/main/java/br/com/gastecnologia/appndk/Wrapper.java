package br.com.gastecnologia.appndk;

/**
 * Created by tiagovanderlei on 17/08/15.
 */
public class Wrapper {
    static {
        System.loadLibrary("keygenerator");
    }

    public native String generate();

}
