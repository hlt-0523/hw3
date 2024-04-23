
# Tests

Each subdirectory represents a file to be analyzed by FileAnalyzer. Inside each directory, there are additional files named after the CLI arguments expected by FileAnalyzer. These files contain the expected output when running FileAnalyzer with the corresponding argument on the test file in the directory.

## Running Tests

To run tests, use the provided Python script `"run_test"`.

```plain
$ ./run_test --help
Usage: ./run_test <file_analyzer_binary> <test_dir> all
Or: ./run_test <file_analyzer_binary> <test_dir> <arg_name>
Or: ./run_test list <test_dir>
```

### Examples

```bash
# list all tests
./run_test list .
# run --get-size test
./run_test ../build/FileAnalyzer . --get-size
# run all tests
./run_test ../build/FileAnalyzer . all
```

### Informations
This program was entirely developed by me, Lingtian He, without collaboration. Some of the comments within the code are written in Chinese; these are personal notes used to mark and remind myself during the programming process and can be disregarded.

I acknowledge that some sections of the code may appear disorganized. This is due to multiple trial-and-error attempts I made while coding, leading to intermittent periods of development. This sporadic approach has impacted the structure, but all functionalities have been thoroughly tested to meet the requirements.