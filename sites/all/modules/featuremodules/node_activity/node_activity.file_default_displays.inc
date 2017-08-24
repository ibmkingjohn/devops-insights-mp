<?php
/**
 * @file
 * node_activity.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function node_activity_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['audio__colorbox__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__colorbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__colorbox__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__colorbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__colorbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['audio__colorbox__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__colorbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__colorbox__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__colorbox__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__colorbox__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['audio__colorbox__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__colorbox__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__colorbox__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'full',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['audio__default__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__default__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__default__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['audio__default__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['audio__preview__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['audio__preview__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__preview__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__preview__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['audio__preview__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['audio__teaser__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__teaser__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__teaser__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'full',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'full',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['audio__teaser__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['audio__wysiwyg__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['audio__wysiwyg__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__wysiwyg__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['audio__wysiwyg__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['audio__wysiwyg__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['audio__wysiwyg__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__colorbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__colorbox__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__colorbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__colorbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['document__colorbox__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['document__colorbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__colorbox__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__colorbox__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__colorbox__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['document__colorbox__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__colorbox__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__colorbox__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'full',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['document__default__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['document__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__default__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__default__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['document__default__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['document__preview__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__preview__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__preview__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['document__preview__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['document__teaser__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['document__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__teaser__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__teaser__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'full',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'full',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['document__teaser__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['document__wysiwyg__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['document__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__wysiwyg__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['document__wysiwyg__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['document__wysiwyg__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['document__wysiwyg__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $export['image__colorbox__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_colorbox_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__colorbox__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'addressfield_default',
    'fallback_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
  );
  $export['image__colorbox__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__colorbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__colorbox__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['image__colorbox__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__colorbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__colorbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__colorbox__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '800',
    'fixed_height' => '600',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'audio_playlist' => 0,
  );
  $export['image__colorbox__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__colorbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__colorbox__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__colorbox__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__colorbox__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__colorbox__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'large',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['image__colorbox__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__colorbox__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_colorbox';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__default__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_colorbox_link';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'teaser',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__default__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_editable';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'addressfield_default',
    'fallback_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
  );
  $export['image__default__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_rendered';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['image__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_table';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_media_colorbox';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'preview',
    'colorbox_view_mode' => 'teaser',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'audio_playlist' => 0,
  );
  $export['image__default__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_media_large_icon';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_mediaelement_audio';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__default__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_mediaelement_video';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__default__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__default__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_image';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '',
    'title' => '',
  );
  $export['image__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__full__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_colorbox_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__full__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'addressfield_default',
    'fallback_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
  );
  $export['image__full__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__full__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['image__full__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__full__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__full__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__full__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__full__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__full__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__full__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__full__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '',
    'title' => '',
  );
  $export['image__full__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__full__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__preview__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_colorbox_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__preview__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'addressfield_default',
    'fallback_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
  );
  $export['image__preview__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['image__preview__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__preview__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__preview__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__preview__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__preview__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
    'alt' => '',
    'title' => '',
  );
  $export['image__preview__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__teaser__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_colorbox_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__teaser__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
  );
  $export['image__teaser__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['image__teaser__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__teaser__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__teaser__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__teaser__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'full',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'full',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__teaser__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
    'alt' => '',
    'title' => '',
  );
  $export['image__teaser__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__wysiwyg__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_colorbox_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__wysiwyg__file_field_colorbox_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__wysiwyg__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__wysiwyg__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['image__wysiwyg__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['image__wysiwyg__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['image__wysiwyg__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
    'fallback_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
  );
  $export['video__colorbox__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__colorbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__colorbox__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__colorbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__colorbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__colorbox__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__colorbox__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__colorbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__colorbox__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__colorbox__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__colorbox__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__colorbox__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__colorbox__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__colorbox__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__colorbox__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__colorbox__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_editable';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
    'fallback_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
  );
  $export['video__default__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_audio';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'multiple_file_behavior' => 'tags',
  );
  $export['video__default__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = -40;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_download_link';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_colorbox';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'teaser',
    'colorbox_view_mode' => 'teaser',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__default__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_large_icon';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediaelement_audio';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__default__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediaelement_video';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__default__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__default__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_video';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 0,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__default__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__full__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__full__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__full__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__full__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__full__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__full__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['video__full__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__full__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__full__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__full__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['video__full__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
    'fallback_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
  );
  $export['video__preview__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'multiple_file_behavior' => 'tags',
  );
  $export['video__preview__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__preview__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_media_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'default',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__preview__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__preview__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__preview__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['video__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__preview__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_youtube_image';
  $file_display->weight = 2;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
  );
  $export['video__preview__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__preview__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'adminvids',
  );
  $export['video__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_editable';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
    'fallback_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
  );
  $export['video__teaser__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_audio';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'multiple_file_behavior' => 'tags',
  );
  $export['video__teaser__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_default';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_download_link';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_table';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_url_plain';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_media_colorbox';
  $file_display->weight = -42;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__teaser__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_media_large_icon';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_mediaelement_audio';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__teaser__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_mediaelement_video';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__teaser__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'full',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'full',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__teaser__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_youtube_image';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__teaser__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_youtube_video';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 0,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__teaser__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_editable';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
  );
  $export['video__wysiwyg__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_audio';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'multiple_file_behavior' => 'tags',
  );
  $export['video__wysiwyg__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_default';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_download_link';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_table';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_url_plain';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_video';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__wysiwyg__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_media_colorbox';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'teaser',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['video__wysiwyg__file_field_media_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_media_large_icon';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_mediaelement_audio';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__wysiwyg__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_mediaelement_video';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'width' => '320',
    'height' => '195',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $export['video__wysiwyg__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_nivo_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'nivo_lightbox_target_view_mode' => 'teaser',
    'nivo_lightbox_html_lightbox' => 0,
    'nivo_lightbox_lightbox_view_mode' => 'teaser',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  $export['video__wysiwyg__file_field_nivo_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_youtube_image';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__wysiwyg__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_youtube_video';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 0,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__wysiwyg__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'admin_videos',
  );
  $export['video__wysiwyg__mediafront_file_player'] = $file_display;

  return $export;
}
