# podTest

gitPod をベースに C/C++ の初歩教育をおこなうための環境テスト

## gitPod での使い方

初回アクセス

1. github にアカウントをとっておく
2. https://gitpod.io/#https://github.com/tomiokamada/podTest にアクセス
3. 1-2分待ったほうがよいかも。（いくつかplugin が load されたりします）

２回目からのアクセス

1: https://gitpod.io/workspaces/ から、自分の実行したい workspace を選びましょう。
	* 14日使っていない状態が続くと、workspace が消滅します。
	* ファイルなどを置いておきたい人は、このページから `Download` ボタンを押せばよいでしょう。

プログラムの実行（例）

1. `samples/hello.c` を開いてください。`samples` をクリックすると、directory の中のファイルも見えるはず。
2. 実行タイププログラムを選んだ状態(`hello.c`選択）で、"Terminal"->"Run Build Task.." でコンパイル可能。選択肢が出ますので、`build gcc`をえらびましょう。同じ directory に `hello` ができれば成功
   * 違うファイルを選択していると、コンパイルできません。
   * ちょこちょこうまくいかないケースもあり。原因確認中
3. `Debug`->`Start Debugging` でデバッグ開始


## 中身のファイルの解説

* .theia
  * tasks.json: Build の選択肢設定
  * launch.json: プログラム起動の選択肢設定
* tests
  * 今回ファイルをおいた場所
  * 別にプログラムファイルはお好きな場所に。
* .gitpod.Dockerfile, .gitpod.yml: 実行環境の docker 設定および extension 設定
* README.md: このファイル


  

