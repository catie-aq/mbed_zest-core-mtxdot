# Zest Core MTXDOT
[Zest Core MTXDOT](https://gitlab.com/catie_6tron/zest-core-mtxdot-hardware)
custom target for Mbed OS.

## Usage
In your project root directory:

1.  Add the custom target to your project:

    ```shell
    mbed add https://gitlab.com/catie_6tron/zest-core-mtxdot.git
    ```

2. Enable the custom target by adding or overwriting the `custom_targets.json` at the
   root of the project:

    ```shell
    cp zest-core-mtxdot/custom_targets.json .
    ```

3. Compile for the custom target:

   ```shell
   mbed compile --target ZEST_CORE_MTXDOT
   ```
