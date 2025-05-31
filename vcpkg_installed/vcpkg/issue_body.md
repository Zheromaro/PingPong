Package: gperf:x64-linux@3.1#7

**Host Environment**

- Host: x64-linux
- Compiler: GNU 13.3.0
-    vcpkg-tool version: 2025-05-19-ece4c0f6b8fae9e94513d544c7aa753dd2c82337
    vcpkg-scripts version: a9eee3b18d 2025-05-29 (34 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
Downloading http://ftp.gnu.org/pub/gnu/gperf/gperf-3.1.tar.gz -> gperf-3.1.tar.gz
Successfully downloaded gperf-3.1.tar.gz
-- Extracting source /home/zhero/projects/vcpkg/downloads/gperf-3.1.tar.gz
-- Applying patch remove_register_keyword_cpp17.patch
-- Using source at /home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean
-- Configuring x64-linux
-- Building x64-linux-dbg
-- Building x64-linux-rel
CMake Error at scripts/cmake/vcpkg_execute_build_process.cmake:134 (message):
    Command failed: /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --build . --config Release --target install -- -v -j9
    Working Directory: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
    See logs for more information:
      /home/zhero/projects/vcpkg/buildtrees/gperf/install-x64-linux-rel-out.log
      /home/zhero/projects/vcpkg/buildtrees/gperf/install-x64-linux-rel-err.log

Call Stack (most recent call first):
  /home/zhero/projects/pikumaTutorial/vcpkg_installed/x64-linux/share/vcpkg-cmake/vcpkg_cmake_build.cmake:74 (vcpkg_execute_build_process)
  /home/zhero/projects/pikumaTutorial/vcpkg_installed/x64-linux/share/vcpkg-cmake/vcpkg_cmake_install.cmake:16 (vcpkg_cmake_build)
  /home/zhero/.cache/vcpkg/registries/git-trees/ce0c8faaa002c19f8d96a64d4929439cab4570f2/portfile.cmake:24 (vcpkg_cmake_install)
  scripts/ports.cmake:206 (include)



```

<details><summary>/home/zhero/projects/vcpkg/buildtrees/gperf/install-x64-linux-rel-err.log</summary>

```
ninja: error: manifest 'build.ninja' still dirty after 100 tries, perhaps system time is not set
```
</details>

<details><summary>/home/zhero/projects/vcpkg/buildtrees/gperf/install-x64-linux-rel-out.log</summary>

```
Change Dir: '/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel'

Run Build Command(s): /home/zhero/projects/vcpkg/downloads/tools/ninja/1.12.1-linux/ninja -v -v -j9 install
[0/1] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/2] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/3] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/4] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/5] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/6] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/7] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/8] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/9] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/10] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/11] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/12] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/13] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/14] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/15] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/16] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/17] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/18] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/19] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/20] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/21] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/22] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/23] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/24] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/25] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/26] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/27] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/28] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/29] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/30] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/31] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/32] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/33] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/34] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/35] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/36] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/37] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/38] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/39] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/40] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/41] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/42] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/43] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/44] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/45] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/46] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/47] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/48] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/49] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/50] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/51] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/52] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/53] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/54] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/55] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/56] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/57] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/58] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/59] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/60] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/61] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/62] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/63] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/64] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/65] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/66] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/67] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/68] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/69] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/70] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/71] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/72] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/73] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/74] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/75] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/76] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/77] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/78] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/79] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/80] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/81] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/82] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/83] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/84] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/85] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/86] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/87] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/88] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/89] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/90] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/91] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/92] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/93] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/94] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/95] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/96] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/97] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/98] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/99] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
[0/100] /home/zhero/projects/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake --regenerate-during-build -S/home/zhero/projects/vcpkg/buildtrees/gperf/src/gperf-3-7fd634e44a.clean -B/home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/zhero/projects/vcpkg/buildtrees/gperf/x64-linux-rel
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "sdl2",
    "sdl2-image"
  ]
}

```
</details>
