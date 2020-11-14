# AFL - Fuzzing 실습

### Install

---

```wasm
$ wget http://lcamtuf.coredump.cx/afl/releases/afl-latest.tgz
$ tar -xvf afl-latest.tgz
$ cd afl-2.49b/
$ make
$ sudo make install
```

### Command

---
![AFL%20-%20Fuzzing.png](AFL%20-%20Fuzzing.png)
- aft-fuzz : 실제 퍼징을 시도하는 command

    White-box

    ```markdown
    afl-fuzz **-i** <test case dir > -o <output dir > taget_app
    ```

    Black-bok

    ```markdown
    afl-fuzz **-Q** -i <test case dir > -o <output dir > target_app
    ```

- afl-cmin : 중복된 test case 를 제거해 줌.
    - 가장 적합한 test case 만을 분리함.

    ```markdown
    afl-cmin -i testcase/ -o newTestCase/ ./test
    ```

- afl-tmin : test case 의 최적화를 진행 함.

    최적화 되는 내용들은 다음과 같음

    - 데이터 블럭의 최소화
    - 기호의 최소화
    - 문자의 최소화

    ```markdown
    afl-tmin -i
    result/crashes/id\--- < operation result > -o testcaseMin ./test
    ```

- afl-gotcpu : afl-fuzz 에서 사용 중인 cpu 점유 비율을 출력함.

    ```markdown
    afl-gotcpu
    ```

- afl-plot
    - 해당 도구는 fuzz 의 진행상황을 그래프로 출력함.
    - 실행하면 index.html 파일이 생성 됨.

        ![AFL%20-%20Fuzzing.png](AFL%20-%20Fuzzing.png)
