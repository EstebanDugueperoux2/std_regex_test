echo "echo Restoring environment" > "/export/home/workingArea/dev/std_regex_test/test_package/build-debug/conan/deactivate_conanrunenv-debug-x86_64.sh"
for v in PATH
do
    is_defined="true"
    value=$(printenv $v) || is_defined="" || true
    if [ -n "$value" ] || [ -n "$is_defined" ]
    then
        echo export "$v='$value'" >> "/export/home/workingArea/dev/std_regex_test/test_package/build-debug/conan/deactivate_conanrunenv-debug-x86_64.sh"
    else
        echo unset $v >> "/export/home/workingArea/dev/std_regex_test/test_package/build-debug/conan/deactivate_conanrunenv-debug-x86_64.sh"
    fi
done


export PATH="/xusers/ed103615/.conan/data/std_regex_test/0.0.1/_/_/package/9ff4b7ca1cb37c0de837519f7aeff8bf47ddd212/bin:$PATH"