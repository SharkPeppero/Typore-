Step1:确定是否支持UTF-8的语言环境

```
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
```

Step2:添加 ROS 2 apt 存储库

您需要将 ROS 2 apt 存储库添加到您的系统。首先，通过检查此命令的输出确保启用了Ubuntu Universe 存储库。