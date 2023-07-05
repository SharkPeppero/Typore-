#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include <std_msgs/msg/string.hpp>

using namespace std::chrono_literals;
//创建消息发布方
//创建定时器
//组织消息发布

class topic_communication_send : public rclcpp::Node
{
    public:
        topic_communication_send(std::string name) : Node(name), count_(0)
        {
            RCLCPP_INFO(this->get_logger(), "发布方节点初始化ing");
            publisher_ = this->create_publisher<std_msgs::msg::String>("/chatter", 10);
            //创建定时器，在定时器初始化的过程添加回调函数实现
            timer_ = this->create_wall_timer(100ms, std::bind(&topic_communication_send::time_callbacker, this, nullptr));
        }

        void time_callbacker() 
        {
            std_msgs::msg::String msg;
            msg.data = "hello world!" + std::to_string(count_++);
            RCLCPP_INFO(this->get_logger(), "发布方发布了:%s", msg.data);
            publisher_->publish(msg);
            return;
        }

    private:
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        size_t count_;
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    rclcpp::init(argc, argv);
    auto node = std::make_shared<topic_communication_send>("Topic_communication_send");
    
    rclcpp::spin(node);

    rclcpp::shutdown();//资源释放
    return 0;
}
