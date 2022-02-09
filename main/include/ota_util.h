typedef enum ota_err_type {
    OTA_OK                 = 0,
    OTA_FAIL               = -1,
    OTA_ERR_INVALID_ARG  = -2,
    OTA_ERR_NO_MEM        = -3,
    OTA_ERR_INVALID_SIZE = -4
} ota_err_t;

void ota_nvs_flash_init();

void ota_check_for_update(void *user_data);

void ota_restart_device();

ota_err_t ota_update_device();

int ota_get_polling_period_day();

ota_err_t ota_api_get_firmware_version_load(unsigned char *device_info, unsigned int device_info_len, char **firmware_version);