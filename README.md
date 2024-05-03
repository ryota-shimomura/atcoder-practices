# atcoder-practices

Atcoder submission history

## Install Guide

- AtCoder Library (ACL): https://atcoder.jp/posts/517
- atcoder-cli: http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/

## Commands & Shortcuts

- Start new contests of AtCoder

```bash
acc new ${CONTEST_ID}
```

Sample test cases are downloaded by this command.

- Build C++ program (`Ctrl+Shift+B`)

Refer [tasks.json](./.vscode/tasks.json) about compiler options.

- Run AtCoder tests for public test cases (downloaded by `acc new`)

```
oj t -c ./program -d ./ABC/sample/a/tests
```

- Submit solution

```bash
cd ./ABC/sample/a
acc submit
```
