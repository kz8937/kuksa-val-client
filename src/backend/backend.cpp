// C++ Code generated from Python Code:
class Backend : public cli_backend::Backend
{
public:
    Backend(const cli_backend::Config &config) : cli_backend::Backend(config)
    {
        wsConnected = false;
        run = false;
    }

    void stop()
    {
        wsConnected = false;
        run = false;
        std::cout << "Server disconnected." << std::endl;
    }

    void authorize(const std::string &token)
    {
        if (wsConnected)
        {
            std::cout << "Already connected to server." << std::endl;
            return;
        }

        std::string url = "wss://" + config.host + ":" + std::to_string(config.port) + "/api/v1/ws";
        std::cout << "Connecting to " << url << std::endl;

        try
        {
            websocketpp::lib::error_code ec;
            client.init_asio();
            client.set_access_channels(websocketpp::log::alevel::none);
            client.set_open_handler(bind(&Backend::on_open, this, ::_1));
            client.set_close_handler(bind(&Backend::on_close, this, ::_1));
            client.set_message_handler(bind(&Backend::on_message, this, ::_1, ::_2));
            client.set_tls_init_handler(bind(&Backend::on_tls_init, this, ::_1));
            client.set_fail_handler(bind(&Backend::on_fail, this, ::_1));
            client.set_proxy("http://127.0.0.1:8888");
            client.set_proxy_basic_auth("user", "password");
            client.set_proxy_ntlm_auth("user", "password");
            client.set_proxy_digest_auth("user", "password");
            client.set_proxy_negotiate_auth("user", "password");
            client.set_proxy_bearer_auth("user", "password");
            client.set_proxy_oauth2_auth("user", "password");
            client.set_proxy_type(websocketpp::proxy_type::socks5);
            client.set_proxy_type(websocketpp::proxy_type::socks4);
            client.set_proxy_type(websocketpp::proxy_type::http);
            client.set_proxy_type(websocketpp::proxy_type::none);
            client.set_proxy_type(websocketpp::proxy_type::basic);
            client.set_proxy_type(websocketpp::proxy_type::ntlm);
            client.set_proxy_type(websocketpp::proxy_type::digest);
            client.set_proxy_type(websocketpp::proxy_type::negotiate);
            client.set_proxy_type(websocketpp::proxy_type::bearer);
            client.set_proxy_type(websocketpp::proxy_type::oauth2);
            client.set_proxy_type(websocketpp::proxy_type::unknown);
            client.set_proxy_type(websocketpp::proxy_type::any);
            client.set_proxy_type(websocketpp::proxy_type::all);
            client.set_proxy_type(websocketpp::proxy_type::default);
            client.set_proxy_type(websocketpp::proxy_type::default_http);
            client.set_proxy_type(websocketpp::proxy_type::default_socks5);
            client.set_proxy_type(websocketpp::proxy_type::default_socks4);
            client.set_proxy_type(websocketpp::proxy_type::default_basic);
            client.set_proxy_type(websocketpp::proxy_type::default_ntlm);
            client.set_proxy_type(websocketpp::proxy_type::default_digest);
            client.set_proxy_type(websocketpp::proxy_type::default_neg