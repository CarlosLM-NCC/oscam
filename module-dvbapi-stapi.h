#ifndef MODULE_DVBAPI_STAPI_H_
#define MODULE_DVBAPI_STAPI_H_

int32_t stapi_open(void);
int32_t stapi_set_filter(int32_t demux_id, uint16_t pid, uchar *filter, uchar *mask, int32_t num, char *pmtfile);
int32_t stapi_remove_filter(int32_t demux_id, int32_t num, char *pmtfile);
int32_t stapi_set_pid(int32_t demux_id, int32_t num, int32_t idx, uint16_t pid, char *pmtfile);
int32_t stapi_write_cw(int32_t demux_id, uchar *cw, uint16_t *, int32_t, char *pmtfile);
int32_t stapi_activate_section_filter(int32_t fd, uchar *filter, uchar *mask);

#endif
