# Zest Core MTXDOT
[Zest Core MTXDOT](https://member.6tron.io/) custom target for Mbed OS.

## Usage
In your project root directory:

1.  Add the custom target to your project:

    ```shell
    mbed add https://github.com/catie-aq/mbed_zest-core-mtxdot.git zest-core-mtxdot
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
