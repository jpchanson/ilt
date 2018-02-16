class someveryPrivateCode
{
    public:
        int         veryPrivateKey_m;
        std::string veryPrivatePwd_m;
        std::string veryPrivateIP_m;

        someveryPrivateCode()
        {
        this->verPrivateKey_m = 83042790347;
        this->veryPrivatePwd_m = "an awesome password";
        this->veryPrivateIP_m = "1.2.3.4"
        }

        void doSomethingWithStuff()
        {
            std::cout   << this->veryPrivateKey_m
                        << this->veryPrivatePwd_m
                        << this->veryPrivateIP_m
                        << std::endl;

        }
}
