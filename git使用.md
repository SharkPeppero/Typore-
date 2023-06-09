### git的参数

```
git config --list
    user.email=1142437740@qq.com
    user.name=jianbin.xu
    http.sslverify=false
    https.sslverify=false
```

#### 		http.sslverify  https.sslverify

​	其中，当https.sslverify、http.sslverify配置设置为true时（默认值），Git会在使用HTTPS协议进行操作时验证服务器的SSL证书。这意味着Git会检查服务器的证书是否有效且与信任的根证书匹配。如果证书无效或与根证书不匹配，Git会拒绝连接到服务器，从而提供了一定程度的安全性。

​	可以利用一下命令进行配置：

```
git config --global http.sslverify true   # 启用SSL证书验证
git config --global http.sslverify false  # 禁用SSL证书验证
```



### github的token令牌：

邮箱账号：1142437740@qq.com

Token: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



```
git init 

git add ./ 
git add ./a.txt

git commit -m "xxxx"

git branch -M main

git remote add origin https://xxxx

git push -u origin main

git status
```







