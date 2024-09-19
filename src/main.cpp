#include <iostream>
#include <imgui/imgui.h>
#include <vulkan/vulkan.hpp>

int main(int argc, char* argv[]) {
    VkApplicationInfo app_info = {};
    app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app_info.pApplicationName = "AppEngine";
    app_info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.pEngineName = "AppEngine";
    app_info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo instance_info = {};
    instance_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_info.pApplicationInfo = &app_info;

    VkInstance vk_instance;

    if (vkCreateInstance(&instance_info, nullptr, &vk_instance) == VK_SUCCESS) {
        std::cout << "created instance\n";
    } else {
        std::cout << "Nah\n";
    }

    // Engine loop
    while(false) {

    }

    vkDestroyInstance(vk_instance, NULL);

    return 0;
}